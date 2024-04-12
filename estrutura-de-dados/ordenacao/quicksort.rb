lenVector = 1000000

def preencher_vetor_aleatorio(vetor, tamanho, limite)
  tamanho.times do
    vetor << rand(limite)
  end
end

v = []
preencher_vetor_aleatorio(v, lenVector, lenVector)

def quick_sort(array, first, last)
  if first < last
    pivot_index = partition(array, first, last)
    quick_sort(array, first, pivot_index - 1)
    quick_sort(array, pivot_index + 1, last)
  end
  return array
end

def partition(array, first, last)
  pivot = array[last]
  pIndex = first
  for i in first..last-1
    if array[i] <= pivot
      array[i], array[pIndex] = array[pIndex], array[i]
      pIndex += 1
    end
  end
  array[pIndex], array[last] = array[last], array[pIndex]
  return pIndex
end

quick_sort(v, 0, v.length - 1)
# puts v
