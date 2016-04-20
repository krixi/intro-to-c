

#include <stdio.h>

#define LINE_SIZE 100
#define FILENAME "input.txt"


int main(void)
{
    FILE * filep;
    filep = fopen( FILENAME, "r" );
    if ( filep != NULL )
    {
        FILE * outfile;
        outfile = fopen( "output.txt", "w" );
        if ( outfile != NULL )
        {
            // File was opened.
            char line[LINE_SIZE];
            while( fgets( line, LINE_SIZE, filep) != NULL )
            {
                //printf("line = %s\n", line);
                //fprintf( stdout, "fprintf line = %s\n", line );
                fprintf( outfile, "fprintf line = %s\n", line );
            }
            
            fclose( outfile );
        }

        // Don't forget to close it
        fclose( filep );
    }

    return 0;
}

