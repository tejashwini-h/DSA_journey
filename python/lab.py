def sort_words_in_file(source_file, output_file):
 try:
 # Read words from the source file
 with open(source_file, 'r') as file:
 words = file.read().split()
 # Convert words to lowercase and sort them
 words = [word.lower() for word in words]
 words.sort()
 # Write sorted words to the output file
 with open(output_file, 'w') as file:
 for word in words:
 file.write(word + '\n')
 print(f"Words from '{source_file}' have been sorted and written to '{output_file}'.")
 except FileNotFoundError:
 print(f"Error: The file '{source_file}' does not exist.")
 except IOError as e:
 print(f"Error: {e}")
# Example usage
source_file = 'source.txt'
output_file = 'sorted_words.txt'
sort_words_in_file(source_file, output_file)