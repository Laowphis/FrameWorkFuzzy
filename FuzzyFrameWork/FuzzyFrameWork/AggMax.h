#pragma once
#ifndef AGG_MAX_H
#define AGG_MAX_H

#include "Agg.h"

namespace fuzzy{

	template<class T>
	class AggMax : public Agg<T>{

	public:
		AggMax();
		virtual ~AggMax() {};

		T evaluate(Expression<T>*, Expression<T>*) const;
	};

	template<class T>
	AggMax<T>::AggMax(){}

	template<class T>
	T AggMax<T>::evaluate(Expression<T>* l, Expression<T>* r) const{
		return (evaluate(l) > evaluate(r)) ? evaluate(l) : evaluate(r);
	}

}

#endif;