#include "sort.h"

namespace algorithm_fundamental
{
  // \todo{Need to modify this to make a template
  void bucket_sort(float array[], int n)
  {
    std::vector<float> bucket[n];

    for (int i=0; i < n; i++)
    {
      // bucket index
      int bi = n * array[i];
      bucket[bi].push_back(array[i]);
    }

    // sort individual buckets, 
    // hmm, doesn't this increase the complexity by order of nlogn?
    for (int i=0; i < n; i++)
    {
      sort( bucket[i].begin(), bucket[i].end() );
    }

    // concatenate individual buckets into one
    int index=0;
    for (int i=0; i < n; i++)
    {
      for (int j=0; j < bucket[i].size(); j++)
      {
	array[index++] = bucket[i][j];
      }
    }
  }    
}
