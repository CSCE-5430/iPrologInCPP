#pragma once

#include <string>
#include <vector>
#include <cmath>
#include <stdexcept>
#include "stringbuilder.h"

/// <summary>
/// derived from code at https://github.com/mikvor/hashmapTest
/// </summary>
namespace iProlog
{
	class IntMap 
	{
  private:
	  static constexpr long long serialVersionUID = 1LL;

	  static constexpr int FREE_KEY = 0;

  public:
	  static constexpr int NO_VALUE = 0;

	  /// <summary>
	  /// Keys and values </summary>
  private:
	  std::vector<int> m_data;

	  /// <summary>
	  /// Do we have 'free' key in the map? </summary>
	  bool m_hasFreeKey = false;
	  /// <summary>
	  /// Value of 'free' key </summary>
	  int m_freeValue = 0;

	  /// <summary>
	  /// Fill factor, must be between (0 and 1) </summary>
	  const float m_fillFactor;
	  /// <summary>
	  /// We will resize a map once it reaches this size </summary>
	  int m_threshold = 0;
	  /// <summary>
	  /// Current map size </summary>
	  int m_size = 0;

	  /// <summary>
	  /// Mask to calculate the original position </summary>
	  int m_mask = 0;
	  int m_mask2 = 0;

  public:
	  IntMap();

	  IntMap(int const size);

	  IntMap(int const size, float const fillFactor);

	  int get(int const key);

	  // for use as IntSet - Paul Tarau

	  bool contains(int const key);

	  bool add(int const key);

	  virtual bool delete_Renamed(int const key);

	  bool isEmpty();

	  static void intersect0(IntMap *const m, std::vector<IntMap*> &maps, std::vector<IntMap*> &vmaps, IntStack *const r);

	  static IntStack *intersect(std::vector<IntMap*> &maps, std::vector<IntMap*> &vmaps);

	  // end changes

	  int put(int const key, int const value);

	  int remove(int const key);

  private:
	  int shiftKeys(int pos);

  public:
	  int size();

  private:
	  void rehash(int const newCapacity);

	  
	  static long long nextPowerOfTwo(long long x);


	  static int arraySize(int const expected, float const f);

	  //taken from FastUtil
	  static constexpr int INT_PHI = 0x9E3779B9;

	  static int phiMix(int const x);

  public:
	  std::wstring toString() override;

	};

}
