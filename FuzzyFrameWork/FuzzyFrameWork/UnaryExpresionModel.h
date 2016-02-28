#pragma once
#ifndef UNARYEXPRESSIONMODEL_H
#define UNARYEXPRESSIONMODEL_H

#include "Expression.h"
#include "UnaryExpression.h"

namespace core{

	template<class T>
	class UnaryExpressionModel : public Expression<T>, public UnaryExpression<T> {

	private:
		Expression<T>* operand;
		UnaryExpression<T>* operatr;

	public:
		T evaluate() const;
		T evaluate(Expression<T>*) const;

		UnaryExpressionModel();
		UnaryExpressionModel(Expression<T>*, UnaryExpression<T>*);
		virtual ~UnaryExpressionModel(){};
	};

	template<class T>
	UnaryExpressionModel<T>::UnaryExpressionModel() : operand(NULL),operatr(NULL){}

	template<class T>
	UnaryExpressionModel<T>::UnaryExpressionModel(Expression<T>* opra_,UnaryExpression<T>* ope_) : operand(opra_),operatr(ope_) {}

	template<class T>
	T UnaryExpressionModel<T>::evaluate() const{
		if (operand != NULL)
			return operatr->evaluate(operand);
	}

	template<class T>
	T UnaryExpressionModel<T>::evaluate(Expression<T>* o) const{
		if (operatr != NULL)
			return operatr->evaluate(o);
	}

}
#endif