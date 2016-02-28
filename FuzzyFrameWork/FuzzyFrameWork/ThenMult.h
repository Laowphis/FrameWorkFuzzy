#pragma once
#ifndef THEN_MULT_H
#define THEN_MULT_H

#include "Then.h"

namespace fuzzy{

	template<class T>
	class ThenMult : public Then<T>{

	public:
		ThenMult();
		virtual ~ThenMult() {};

		T evaluate(Expression<T>*, Expression<T>*) const;
	};

	template<class T>
	ThenMult<T>::ThenMult(){}

	template<class T>
	T ThenMult<T>::evaluate(Expression<T>* l, Expression<T>* r) const{
		return (evaluate(l)*evaluate(r));
	}

}

#endif;