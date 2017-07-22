#include "Tile.h"
using namespace std;
Tile::Tile(){}

Tile::Tile(int number, string resource, int value):Tile()
{
	this->number = number;
	this->value = value;
	this->resource = resource;

}

void Tile::SetGeese()
{
	if (this->geese == "")
	{
		this->geese = "GEESE";
	}
	else
	{
		this->geese = "";
	}
}
string Tile::GetGeese()
{
	return this->geese;

}


int Tile::GetNumber()
{
	return this->number;
}
string Tile::GetResource()
{
	return this->resource;
}

int Tile::GetValue()
{
	return this->value;
}

void Tile::addAddress(int add)
{
	tileAddress.emplace_back(add);	
}