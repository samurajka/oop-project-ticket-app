#pragma once

#include <string>
#include "Printable.h"
#include <iostream>
#include <vector>

using namespace std;

class Artist : public Printable
{
private:
	string name;
	string genre;
	vector<string> albums;

public:
	Artist(string name, string genre);
	~Artist();

	void Print();

	string GetName();

	void AddAlbum(string name);

};

