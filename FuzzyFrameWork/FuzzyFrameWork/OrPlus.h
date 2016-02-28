#pragma once
#ifndef OR_PLUS_H
#define OR_PLUS_H

#include "Or.h"

namespace fuzzy{

	template<class T>
	class OrPlus : public Or<T>{

	public:
		OrPlus();
		virtual ~OrPlus() {};

		T evaluate(Expression<T>*, Expression<T>*) const;
	};

	template<class T>
	OrPlus<T>::OrPlus(){}

	template<class T>
	T OrPlus<T>::evaluate(Expression<T>* l, Expression<T>* r) const{
		return (evaluate(l) + evaluate(r));
	}

}

#endif;