#pragma once
#ifndef AND_MULT_H
#define AND_MULT_H

#include "And.h"

namespace fuzzy{

	template<class T>
	class AndMult : public And<T>{

	public:
		AndMult();
		virtual ~AndMult() {};

		T evaluate(Expression<T>*, Expression<T>*) const;
	};

	template<class T>
	AndMult<T>::AndMult(){}

	template<class T>
	T AndMult<T>::evaluate(Expression<T>* l, Expression<T>* r) const{
		return evaluate(l)*evaluate(r);
	}

}

#endif;