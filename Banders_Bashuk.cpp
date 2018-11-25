#include <iostream>
#include <cmath>

using namespace std;

const static int k = 10;

// ================================== EXP ==================================================

template <int N, int I, int K, int L>
class ExpSeries
{
public:
	enum { go = (K != L) }; // static int go = (K != L);

	static inline float sum()
	{
		return 1 + ((float(N) / I) / K) * (ExpSeries <N * go, I * go, (K + 1) * go, L * go>::sum());
	}
};

template <>
class ExpSeries <0, 0, 0, 0>
{
public:

	static inline float sum()
	{
		return 1;
	}
};


template <int N, int I>
class Exp
{
public:

	static inline float sum()
	{
		return ExpSeries <N, I, 1, k>::sum();
		//return float(N) / I;
	}
};

template <int N, int I, int K, int L>
class CosExpSeries
{
public:
	enum { go = (K != L) }; // static int go = (K != L);

	static inline float sum()
	{
		return 1 - ((Exp<N, I>::sum() * Exp<N, I>::sum()) / (2 * K - 1) / (2 * K)) * (CosExpSeries <N * go, I * go, (K + 1) * go, L * go>::sum());
	}
};

template <>
class CosExpSeries <0, 0, 0, 0>
{
public:

	static inline float sum()
	{
		return 1;
	}
};


template <int N, int I>
class CosExp
{
public:

	static inline float sum()
	{
		return CosExpSeries <N, I, 1, k>::sum();
	}
};

// ================================== ArccosExp ============================================

template <int N, int I, int K, int L>
class ArccosExpSeries
{
public:
	enum { go = (K != L) }; // static int go = (K != L);

	static inline float sum()
	{
		return 1.0 / (2 * K - 3) + ((Exp<N, I>::sum() * Exp<N, I>::sum()) * (2 * K - 3) / (2 * K - 2)) * (ArccosExpSeries <N * go, I * go, (K + 1) * go, L * go>::sum());
	}
};

template <>
class ArccosExpSeries <0, 0, 0, 0>
{
public:

	static inline float sum()
	{
		return 1;
	}
};

template <int N, int I>
class ArccosExp
{
public:

	static inline float sum()
	{
		return M_PI / 2 - Exp<N, I>::sum() * ArccosExpSeries <N, I, 2, k>::sum();
		//return float(N) / I;
	}
};

// ================================== LnArccosExp ==========================================

template <int N, int I, int K, int L>
class LnArccosExpSeries {
public:
	enum { go = (K != L) }; // static int go = (K != L);

	static inline float sum()
	{
		return 1 + (((((ArccosExp<N, I>::sum() - 1) / (ArccosExp<N, I>::sum() + 1)) *
			((ArccosExp<N, I>::sum() - 1) / (ArccosExp<N, I>::sum() + 1))) * (2 * K - 3)) / (2 * K - 1)) * LnArccosExpSeries <N * go, I * go, (K + 1) * go, L * go>::sum();
	}
};

template <>
class LnArccosExpSeries <0, 0, 0, 0>
{
public:

	static inline float sum()
	{
		return 1;
	}
};

template <int N, int I>
class LnArccosExp
{
public:

	static inline float sum()
	{
		return 2 * ((ArccosExp<N, I>::sum() - 1) / (ArccosExp<N, I>::sum() + 1)) * LnArccosExpSeries <N, I, 2, k>::sum();
		//return float(N) / I;
	}
};

// ================================== ArctgLnArccosExp =====================================

template <int N, int I, int K, int L>
class ArctgLnArccosExpSeries {
public:
	enum { go = (K != L) }; // static int go = (K != L);

	static inline float sum()
	{
		return 1 - ((((LnArccosExp<N, I>::sum()) * (ArccosExp<N, I>::sum())) * (2 * K - 3)) / (2 * K - 1)) * ArctgLnArccosExpSeries <N * go, I * go, (K + 1) * go, L * go>::sum();
	}
};

template <>
class ArctgLnArccosExpSeries <0, 0, 0, 0> {
public:

	static inline float sum()
	{
		return 1;
	}
};

template <int N, int I>
class ArctgLnArccosExp {
public:

	static inline float sum()
	{
		return LnArccosExp<N, I>::sum() * ArctgLnArccosExpSeries <N, I, 2, k>::sum();
		//return float(N) / I;
	}
};

// ================================== SinArctgLnArccosExp ==================================

template <int N, int I, int K, int L>
class SinArctgLnArccosExpSeries {
public:
	enum { go = (K != L) }; // static int go = (K != L);

	static inline float sum()
	{
		return 1 - (ArctgLnArccosExp<N, I>::sum())*(ArctgLnArccosExp<N, I>::sum())*(2 * K) / (2 * K + 1) * SinArctgLnArccosExpSeries <N * go, I * go, (K + 1) * go, L * go>::sum();
	}
};

template <>
class SinArctgLnArccosExpSeries <0, 0, 0, 0> {
public:

	static inline float sum()
	{
		return 1;
	}
};

template <int N, int I>
class SinArctgLnArccosExp {
public:

	static inline float sum()
	{
		return ArctgLnArccosExp<N, I>::sum() * SinArctgLnArccosExpSeries <N, I, 1, k>::sum();
		//return float(N) / I;
	}
};



int main()
{
	printf("%.8lf\n", SinArctgLnArccosExp <-1, 2>::sum());

	return 0;
}