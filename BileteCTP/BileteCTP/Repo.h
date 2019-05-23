#pragma once
#include "Station.h"
#include "Ticket.h"
#include "Bus.h"
#include "User.h"
#include <vector>
template <class T>
class Repo
{
private:
	vector <T> v;
public:
	Repo();
	~Repo();
	void readEntity(string link);
	vector<T> getAll();
};


template <class T>
Repo<T>::Repo()
{
}

template <class T>
Repo<T>::~Repo()
{
}

template<class T>
inline void Repo<T>::readEntity(string link)
{
	ifstream in(link);
	while (in.good())
	{
		T s;
		in >> s;
		v.push_back(s);
		
	}

}

template<class T>
inline vector<T> Repo<T>::getAll()
{
	return this->v;
}
