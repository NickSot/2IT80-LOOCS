﻿// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

// TODO:
// - create the hook
// - locate the physics component of the engine
// - call the hook on each engine tick
// - export the binary

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	FILE * f;
	fopen_s(&f, "f.txt", "w");
	fprintf(f, "This works!");
	fclose(f);

	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

