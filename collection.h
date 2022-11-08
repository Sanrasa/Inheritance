#ifndef COLLECTION_H
#define COLLECTION_H
#include <vector>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class Collection
{
private:
    vector<string> movies;


public:
    Collection();
    string getMovie(long pos);
    void AdditionalInfo();
    vector<string> getMovieVector();
    void setMovie(string movieName);
    void setAuthorInfo(string authorName, long pos);
    void setYearInfo(string yearName, long pos);
    void setGenreInfo(string genreName, long pos);
    int numberOfMovies();
    void listMovies();
    string delMovie(long pos);
    void exportCollection(string fileName);
    string importCollection(string fileName);
    void replace(long pos);
};

#endif // COLLECTION_H
