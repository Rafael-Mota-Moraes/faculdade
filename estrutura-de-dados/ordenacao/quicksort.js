const lenVector = 1000000;

function preencherVetorAleatorio(vetor, tamanho, limite) {
  for (let i = 0; i < tamanho; i++) {
    vetor.push(Math.floor(Math.random() * limite));
  }
}

const v = [];
preencherVetorAleatorio(v, lenVector, lenVector);

function quickSort(array, first, last) {
  if (first < last) {
    const pivotIndex = partition(array, first, last);
    quickSort(array, first, pivotIndex - 1);
    quickSort(array, pivotIndex + 1, last);
  }
  return array;
}

function partition(array, first, last) {
  const pivot = array[last];
  let pIndex = first;
  for (let i = first; i < last; i++) {
    if (array[i] <= pivot) {
      [array[i], array[pIndex]] = [array[pIndex], array[i]];
      pIndex++;
    }
  }
  [array[pIndex], array[last]] = [array[last], array[pIndex]];
  return pIndex;
}

quickSort(v, 0, v.length - 1);
// console.log(v);
