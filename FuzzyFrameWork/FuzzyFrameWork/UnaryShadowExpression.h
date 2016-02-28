#pragma once
#ifndef UNARYSHADOWEXPRESSION_H
#define UNARYSHADOWEXPRESSION_H

#include"UnaryExpression.h"

namespace core {

	template<class T>
	class UnaryShadowExpression : public UnaryExpression<T> {

	private:
		UnaryExpression<T>* target;

	public:
		UnaryShadowExpression(UnaryExpression<T>*);

		T evaluate(Expression<T>*) const;
		void setTarget(UnaryExpression<T>*);

	};

	template<class T>
	UnaryShadowExpression<T>::UnaryShadowExpression(UnaryExpression<T>* tg):target(tg){}

	template<class T>
	void UnaryShadowExpression<T>::setTarget(UnaryExpression<T>* t) {
		target = t;
	}

	template<class T>
	T UnaryShadowExpression<T>::evaluate(Expression<T>* o) const{
		if (target != NULL)
			return target.evaluate(o);
	}
}

#endif
