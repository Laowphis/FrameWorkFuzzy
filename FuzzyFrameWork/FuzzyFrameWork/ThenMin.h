#pragma once
#ifndef THEN_MIN_H
#define THEN_MIN_H

#include "Then.h"

namespace fuzzy{

	template<class T>
	class ThenMin : public Then<T>{

	public:
		ThenMin();
		virtual ~ThenMin() {};

		T evaluate(Expression<T>*, Expression<T>*) const;
	};

	template<class T>
	ThenMin<T>::ThenMin(){}

	template<class T>
	T ThenMin<T>::evaluate(Expression<T>* l, Expression<T>* r) const{
		return (evaluate(l) < evaluate(r)) ? evaluate(l) : evaluate(r);
	}

}

#endif;