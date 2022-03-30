#pragma once
#include <cstdlib>
#include <cstring>
#include <cstdio>
namespace FFMPEG
{
	int VideotoImage(const char* videoPath,
		const char* imagePath,        
		const char* imageFormat);       
	int ImagetoVideo(const char* imagePath,
		const char* imageFormat,        
		const char* videoPath,            
		unsigned rawFrameRates = 10,     
		unsigned outputFrameRates = 10,  
		unsigned kbps = 0);               
	
}