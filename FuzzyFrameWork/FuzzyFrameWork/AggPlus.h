#pragma once
#ifndef AGG_PLUS_H
#define AGG_PLUS_H

#include "Agg.h"

namespace fuzzy{

	template<class T>
	class AggPlus : public Agg<T>{

	public:
		AggPlus();
		virtual ~AggPlus() {};

		T evaluate(Expression<T>*, Expression<T>*) const;
	};


	template<class T>
	AggPlus<T>::AggPlus(){}

	template<class T>
	T AggPlus<T>::evaluate(Expression<T>* l, Expression<T>* r) const{
		return (evaluate(l) + evaluate(r));
	}

}

#endif;