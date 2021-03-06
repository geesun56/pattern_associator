#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef struct _Pattern_metadata_{  
    int** weights;
    int* num_of_patterns;
    int* thresholds;
}Pattern_info;  //Metadata for output patterns(designated patterns)


int** weight_load(const char* filename, int _input_length, int* _output_count);
int count_lines(FILE* fp, int _line_length);
int** _weight_read_and_load_(FILE* _input_file, int _line_count, int _input_length);
void _print_weight(int _length, int lines, int** weight);
void _print_threshold(int count, int* array);
int* threshold_load(const char* filename, int _pattern_counts);