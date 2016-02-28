#pragma once
#ifndef AND_MIN_H
#define AND_MIN_H

#include "And.h"

namespace fuzzy{

	template<class T>
	class AndMin : public And<T>{

	public:
		AndMin();
		virtual ~AndMin() {};

		 T evaluate(Expression<T>*, Expression<T>*) const;
	};


	template<class T>
	AndMin<T>::AndMin(){}

	template<class T>
	T AndMin<T>::evaluate(Expression<T>* l, Expression<T>* r) const{
		l->evaluate();
		if (evaluate(l) < evaluate(r)) return evaluate(l)
		else return evaluate(r);
	}

}

#endif;