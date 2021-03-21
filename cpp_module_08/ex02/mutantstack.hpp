#ifndef _MUTANTSTACK_HPP_
#define _MUTANTSTACK_HPP_
#include <stack>
template <typename T>
class MutantStack : public std::stack<T>{
	public:
		MutantStack(): std::stack<T>(){}
		MutantStack(MutantStack const & ms) : std::stack<T>(ms){}
		MutantStack & operator=(MutantStack const & ms) {this->c = ms.c;}
		virtual ~MutantStack(){};
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
		reverse_iterator rbegin() { return this->c.rbegin(); }
		reverse_iterator rend() { return this->c.rend(); }
};
#endif
