#pragma once
#ifndef BINARYSHADOWEXPRESSIONMODEL_H
#define BINARYSHADOWEXPRESSIONMODEL_H


#include "BinaryExpression.h"

namespace core {

	template<class T>
	class BinaryShadowExpression :public BinaryExpression<T>{

	private:
		BinaryExpression<T> target;

	public:
		T evaluate(Expression<T>*, Expression<T>*) const;
		void setTarget(BinaryExpression<T>*);

		BinaryShadowExpression(BinaryExpression<T>*);
		virtual ~BinaryShadowExpression{};
	};


	template<class T>
	BinaryShadowExpression<T>::BinaryShadowExpression(BinaryExpression<T>* tg) : target(tg) {}

	template<class T>
	void BinaryShadowExpression<T>::setTarget(BinaryExpression<T>* t) {
		target = t;
	}
	
	template<class T>
	T BinaryShadowExpression<T>::evaluate(Expression<T>* l, Expression<T>* r) const {
		if (target != null)
			return target.evaluate(l, r);
	}

}
#endif
