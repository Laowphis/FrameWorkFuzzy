#pragma  once
#ifndef NOT_MINUS_H
#define NOT_MINUS_H

#include "Not.h"

namespace fuzzy{

	template<class T>
	class NotMinus1 : public Not<T>{

	public: 
		T evaluate(Expression<T>*) const;

	};

	template<class T>
	T NotMinus1<T>::evaluate(Expression<T>* o) const{

	}
}

#endif