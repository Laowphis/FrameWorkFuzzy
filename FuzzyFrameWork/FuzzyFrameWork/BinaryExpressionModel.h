#pragma once
#ifndef BINARYEXPRESSIONMODEL_H
#define BINARYEXPRESSIONMODEL_H

#include "Expression.h"
#include "BinaryExpression.h"

namespace core{

	template<class T>
	class BinaryExpressionModel :public BinaryExpression<T>, public Expression<T> {

	private:
		Expression<T>* left;
		Expression<T>* right;
		BinaryExpression<T> operatr;

	public:
		T evaluate() const;
		T evaluate(Expression<T>*, Expression<T>*) const;

		BinaryExpressionModel();
		BinaryExpressionModel(Expression<T>*, Expression<T>*, BinaryExpression<T>*);
		virtual ~BinaryExpressionModel{};
	};


	template<class T>
	BinaryExpressionModel<T>::BinaryExpressionModel():left(0), right(0), operatr(0){}

	template<class T>
	BinaryExpressionModel<T>::BinaryExpressionModel(Expression<T>* le, Expression<T>* ri, BinaryExpression<T>* op) :left(le), right(ri), operatr(op){}

	template<class T>
	T BinaryExpressionModel<T>::evaluate() const{
		if (left != null && right != null)
			return evaluate(left, right);
	}

	template<class T>
	T BinaryExpressionModel<T>::evaluate(Expression<T>* l, Expression<T>* r) const{
		if (operatr != null)
			return operatr.evaluate(l, r);
	}

}
#endif
