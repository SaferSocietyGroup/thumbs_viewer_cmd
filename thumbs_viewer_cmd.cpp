// thumbs_viewer_cmd.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	if (argc != 3)
	{
		fputs("Usage:\nthumbs_viewer_cmd.exe input_file output_dir", stderr);
	} else {
		read_database(argv[1], argv[2]);
	}

	return 0;
}

