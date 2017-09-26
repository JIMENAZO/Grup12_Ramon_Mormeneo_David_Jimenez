#include <iostream>
#include <vector>
#include <deque>
#include<queue>
#include<stack>
#include<list>
#include<forward_list>
#include <map>
#include<set>


typedef std::vector<int>::iterator myvect;
typedef std::vector<int>::reverse_iterator myrvect;
typedef std::vector<int>::const_iterator mycvect;
typedef std::vector<int>::const_reverse_iterator mycrvect;
typedef std::deque<int>::iterator mydeq;
typedef std::deque<int>::reverse_iterator myrdeq;
typedef std::deque<int>::const_iterator mycdeq;
typedef std::deque<int>::const_reverse_iterator mycrdeq;
typedef std::list<int>::iterator mylist;
typedef std::list<int>::reverse_iterator myrlist;
typedef std::list<int>::const_iterator myclist;
typedef std::list<int>::const_reverse_iterator mycrlist;
typedef std::forward_list<int>::iterator myflist;
typedef std::forward_list<int>::const_iterator mycflist;
typedef std::map<char, int>::iterator mymap;
typedef std::map<char, int>::reverse_iterator myrmap;
typedef std::map<char, int>::const_iterator mycmap;
typedef std::set<int>::reverse_iterator myrset;
typedef std::set<int>::const_iterator mycset;
typedef std::set<int>::iterator myset;

void main()
{
	/*
	//vector
	std::vector<int> v1;
	std::vector<int> v2({ 1,2,3,4,5,6 });
	std::vector<int> v3(v2);
	std::vector<int>v4(5);
	std::vector<int>v5(5, 10);
	std::vector<int>v6(v2.begin() + 1, v2.end());
	int *pv;
	pv = new int [4] {1, 2, 3, 4};
	std::vector<int>v7(pv, pv + 4);
	for (myvect it = v2.begin(); it != v2.end(); it++)
	{
	std::cout << *it << std::endl;
	}
	for (myrvect it = v2.rbegin(); it != v2.rend(); it++)
	{
	std::cout << *it << std::endl;
	}
	for (mycvect it = v2.cbegin(); it != v2.cend(); it++)
	{
	std::cout << *it << std::endl;
	}
	for (mycrvect it = v2.crbegin(); it != v2.crend(); it++)
	{
	std::cout << *it << std::endl;
	}*/
	/*
	//deque
	std::deque<int>d1;
	std::deque<int>d2(5);
	std::deque<int>d3(5,3);
	std::deque<int>d4({ 1,2,3,4 });
	std::deque<int>d5(d4);
	std::deque<int>d6(d4.begin(),d4.end());
	for (mydeq it = d4.begin(); it != d4.end(); it++)
	{
	std::cout << *it << std::endl;
	}
	for (myrdeq it = d4.rbegin(); it != d4.rend(); it++)
	{
	std::cout << *it << std::endl;
	}
	for (mycdeq it = d4.cbegin(); it != d4.cend(); it++)
	{
	std::cout << *it << std::endl;
	}
	for (mycrdeq it = d4.crbegin(); it != d4.crend(); it++)
	{
	std::cout << *it << std::endl;
	}*/
	/*
	//queue
	std::deque<int>d4({ 1,2,3,4 });
	std::queue<int> que1;
	std::queue<int> que2({ 1,2,3,4 });
	std::queue<int> que3(que2);
	std::queue<int> que4(d4);*/
	/*
	//priority_queue
	int myints[]{ 10,20,30,40 };
	std::priority_queue<int> pque1;
	std::priority_queue<int> pque2(myints,myints+4);
	std::priority_queue<int> pque3(pque2);*/
	/*
	//stack
	std::deque<int>d4({ 1,2,3,4 });
	std::stack<int> que1;
	std::stack<int> que2({ 1,2,3,4 });
	std::stack<int> que3(que2);
	std::stack<int> que4(d4)*/

	/*
	//list
	std::list<int> l1;
	l1.push_back(1);
	l1.push_back(2);
	l1.push_back(3);
	std::list<int> l2(l1);
	std::list<int> l3;
	l3 = l2;
	int myints[]{ 10,20,30,40 };
	std::list<int> l5(myints,myints+5);
	for (mylist it = l1.begin(); it < l1.end; it++)
	{
	std::cout << *it << std::endl;
	}
	for (myrlist it = l1.rbegin(); it < l1.rend; it++)
	{
	std::cout << *it << std::endl;
	}
	for (myclist it = l1.cbegin(); it < l1.cend; it++)
	{
	std::cout << *it << std::endl;
	}
	for (mycrlist it = l1.crbegin(); it < l1.crend; it++)
	{
	std::cout << *it << std::endl;
	}*/

    // forward_list
    /*
    std::forward_list<int> l1;
	l1.push_front(1);
	l1.push_front(2);
	l1.push_front(3);
	std::forward_list<int> l2(l1);
	std::forward_list<int> l3;
	l3 = l2;
	int myints[]{ 10,20,30,40 };
	std::forward_list<int> l5(myints, myints + 5);
	for (myflist it = l1.begin(); it < l1.end; it++)
	{
		std::cout << *it << std::endl;
	}
	for (mycflist it = l1.cbegin(); it < l1.cend; it++)
	{
		std::cout << *it << std::endl;
	}

	*/

    // map
/*
struct Person
{
	int age;
	int ranking;
};
  std::map<std::string, Person> persons;

  persons["David"] = { 19,21 };

  std::map<char, int> first;
  first['a'] = 10;
  first['b'] = 30;
  first['c'] = 50;
  first['d'] = 70;

  std::map<char, int> second(first.begin(), first.end());  std::map<char, int> third(second);  for (mymap it = first.begin(); it != first.end(); it++)
  {
	  std::cout << it->first <<it ->second << std::endl;
  }  for (myrmap it = first.rbegin(); it != first.rend(); it++)
  {
	  std::cout << it->first << it->second << std::endl;
  }  for (mycmap it = first.cbegin(); it != first.cend(); it++)
  {
	  std::cout << it->first << it->second << std::endl;
  }  */
   
// set
/*
std::set<int> c1, c2;
c1.insert(1);
c1.insert(4);
c1.insert(3);std::set <std::string> c4({"abc", "def", "ghijk" });std::set <std::string> s5(c4);for (myset it = c1.begin(); it != c1.end(); it++)
{
	std::cout << *it << std::endl;
}for (mycset it = c1.cbegin(); it != c1.cend(); it++)
{
	std::cout << *it << std::endl;
}for (myrset it = c1.rbegin(); it != c1.rend(); it++)
{
	std::cout << *it << std::endl;
}*/

}