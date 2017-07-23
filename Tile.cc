#include "Tile.h"
using namespace std;

Tile::Tile(int number, string resource, int value): number{number},
resource{resource}, value{value}{}

int Tile::getNumber()
{
	return this->number;
}
string Tile::getResource()
{
	return this->resource;
}

int Tile::getValue()
{
	return this->value;
}

void Tile::addAddress(int add)
{
	tileAddress.emplace_back(add);
}

vector<int> Tile::getAddress(){
	return tileAddress;
}
