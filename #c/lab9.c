#include <stdio.h>
 #include <stdlib.h>
 #define MAX_COURSES 100
 // Graph structure
 struct Graph {
    int numCourses;
    int adjMatrix[MAX_COURSES][MAX_COURSES]; // Adjacency matrix to represent the graph
 };
 // Function to create a new graph with a specified number of courses
 struct Graph* createGraph(int numCourses) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->numCourses = numCourses;
    // Initialize the adjacency matrix with 0s (no edges)
    for (int i = 0; i < numCourses; i++) {
        for (int j = 0; j < numCourses; j++) {
            graph->adjMatrix[i][j] = 0;
        }
    }
    return graph;
 }
 // Add a prerequisite (directed edge from courseA to courseB)
 void addPrerequisite(struct Graph* graph, int courseA, int courseB) {
    graph->adjMatrix[courseA][courseB] = 1;
 }
 // Remove a prerequisite (remove the directed edge from courseA to courseB)
 void removePrerequisite(struct Graph* graph, int courseA, int courseB) {
    graph->adjMatrix[courseA][courseB] = 0;
 }
 // Display all courses and their prerequisites
 void displayPrerequisites(struct Graph* graph) {
    for (int i = 0; i < graph->numCourses; i++) {
        printf("Course %d prerequisites: ", i);
        for (int j = 0; j < graph->numCourses; j++) {
            if (graph->adjMatrix[i][j] == 1) {
                printf("%d ", j);
            }
 
        }
        printf("\n");
    }
 }
 // Utility function for topological sorting
 void topologicalSortUtil(struct Graph* graph, int course, int visited[], int* stack, int* 
stackIndex) {
    visited[course] = 1; // Mark the current node as visited
    // Recur for all the vertices adjacent to this vertex
    for (int i = 0; i < graph->numCourses; i++) {
        if (graph->adjMatrix[course][i] == 1 && !visited[i]) {
            topologicalSortUtil(graph, i, visited, stack, stackIndex);
        }
    }
    // Push the current course to the stack (completed)
    stack[(*stackIndex)--] = course;
 }
 // Function to perform topological sorting
 void topologicalSort(struct Graph* graph) {
    int visited[MAX_COURSES] = {0};
    int stack[MAX_COURSES];
    int stackIndex = graph->numCourses - 1;
    // Perform DFS for all courses to find topological order
    for (int i = 0; i < graph->numCourses; i++) {
        if (!visited[i]) {
            topologicalSortUtil(graph, i, visited, stack, &stackIndex);
        }
    }
    // Print the courses in topological order
    printf("Topological Sort (Course Order):\n");
    for (int i = 0; i < graph->numCourses; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
 }
 // Utility function for cycle detection using DFS
 int isCyclicUtil(struct Graph* graph, int course, int visited[], int recStack[]) {
    if (!visited[course]) {
        visited[course] = 1;
        recStack[course] = 1;
        // Recur for all vertices adjacent to this vertex
        for (int i = 0; i < graph->numCourses; i++) {
            if (graph->adjMatrix[course][i]) {
                if (!visited[i] && isCyclicUtil(graph, i, visited, recStack)) {
                    return 1;
                } else if (recStack[i]) {
                    return 1;
                }
 
            }
        }
    }
    recStack[course] = 0; // Remove the course from recursion stack
    return 0;
 }
 // Function to detect a cycle in the graph
 int isCyclic(struct Graph* graph) {
    int visited[MAX_COURSES] = {0};
    int recStack[MAX_COURSES] = {0};
    // Check for cycle starting from each course
    for (int i = 0; i < graph->numCourses; i++) {
        if (isCyclicUtil(graph, i, visited, recStack)) {
            return 1; // Graph contains cycle
        }
    }
    return 0; // No cycle
 }
 int main() {
    int numCourses, choice, courseA, courseB;
    printf("Enter the number of courses: ");
    scanf("%d", &numCourses);
    // Create the graph
    struct Graph* graph = createGraph(numCourses);
    while (1) {
        printf("\nUniversity Course Management\n");
        printf("1. Add Prerequisite (Edge)\n");
        printf("2. Remove Prerequisite (Edge)\n");
        printf("3. Display Courses and Their Prerequisites\n");
        printf("4. Topological Sort (Course Order)\n");
        printf("5. Check for Cycles (Circular Dependency)\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter Course A (prerequisite) and Course B: ");
                scanf("%d %d", &courseA, &courseB);
                addPrerequisite(graph, courseA, courseB);
                break;
            case 2:
                printf("Enter Course A (prerequisite) and Course B to remove: ");
                scanf("%d %d", &courseA, &courseB);
                removePrerequisite(graph, courseA, courseB);
                break;
            case 3:
                displayPrerequisites(graph);
                                                                                                                            
                break;
            case 4:
                topologicalSort(graph);
                break;
            case 5:
                if (isCyclic(graph)) {
                    printf("The graph contains a cycle (circular dependency)!\n");
                } else {
                    printf("No cycles (circular dependency) detected.\n");
                }
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
 }