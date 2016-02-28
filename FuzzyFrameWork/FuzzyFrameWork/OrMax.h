#pragma once
#ifndef OR_MAX_H
#define OR_MAX_H

#include "Or.h"

namespace fuzzy{

	template<class T>
	class OrMax : public Or<T>{

	public:
		OrMax();
		virtual ~OrMax() {};

		T evaluate(Expression<T>*, Expression<T>*) const;
	};

	template<class T>
	OrMax<T>::OrMax(){}

	template<class T>
	T OrMax<T>::evaluate(Expression<T>* l, Expression<T>* r) const{
		return (evaluate(l) > evaluate(r)) ? evaluate(l) : evaluate(r);
	}

}

#endif;