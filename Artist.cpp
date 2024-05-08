#include "Artist.h"

Artist::Artist(string name, string genre) {
	this->name = name;
	this->genre = genre;
}

void Artist::Print() {
	cout << "name: " + this->name << endl;
	cout << "genre: " + this->genre << endl;
	cout << "albums: ";
	for (int i = 0; i < this->albums.size(); i++) {
		cout << this->albums[i];
		if (!i == (this->albums.size() - 1)) {
			cout << ", ";
		}
	}
	cout << endl;
}

void Artist::AddAlbum(string name) {
	this->albums.push_back(name);
}

string Artist::GetName() {
	return this->name;
}