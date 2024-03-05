#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i = 0; i < height ; i++){
        for(int j = 0; j < width; j++){
            int average = round((image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed) / 3.0);
            image[i][j].rgbtBlue = image[i][j].rgbtGreen = image[i][j].rgbtRed = average;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i = 0; i < height ; i++){
        for(int j = 0; j < width; j++){
            int sepiaRed = round(.393 * image[i][j].rgbtRed + .769 * image[i][j].rgbtGreen + .189 * image[i][j].rgbtBlue);
            int sepiaGreen = round(.349 * image[i][j].rgbtRed + .686 * image[i][j].rgbtGreen + .168 * image[i][j].rgbtBlue);
            int sepiaBlue = round(.272 * image[i][j].rgbtRed + .534 * image[i][j].rgbtGreen + .131 * image[i][j].rgbtBlue);
            if(sepiaRed > 255){
                sepiaRed = 255;
            }
            if(sepiaGreen > 255){
                sepiaGreen = 255;
            }
            if(sepiaBlue > 255){
                sepiaBlue = 255;
            }
            image[i][j].rgbtRed = sepiaRed;
            image[i][j].rgbtGreen = sepiaGreen;
            image[i][j].rgbtBlue = sepiaBlue;

        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i = 0; i < height ; i++){
        for(int j = 0; j < width; j++){
            int tmp_red = image[i][j].rgbtRed;
            int tmp_green = image[i][j].rgbtGreen;
            int tmp_blue = image[i][j].rgbtBlue;
            image[i][width-j-1].rgbtRed = image[i][j].rgbtRed;
            image[i][width-j-1].rgbtGreen = image[i][j].rgbtGreen;
            image[i][width-j-1].rgbtBlue = image[i][j].rgbtBlue;
            image[i][j].rgbtRed =tmp_red;
            image[i][j].rgbtGreen =tmp_green;
            image[i][j].rgbtBlue =tmp_blue;
        }
    }

    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
