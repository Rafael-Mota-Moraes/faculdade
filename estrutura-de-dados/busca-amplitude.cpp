#include <iostream>
#include <list>

using namespace std;

const int ROWS = 20;
const int COLS = 40;

class Pos
{
public:
  int x;
  int y;
  Pos *last;

  Pos(int y, int x, Pos *last)
  {
    this->x = x;
    this->y = y;
    this->last = last;
  }
};

void print_map(char map[ROWS][COLS]);
void check_lists(list<Pos *> &open, list<Pos *> &closed, Pos *temp);

int main()
{
  char map[ROWS][COLS];
  for (int i = 0; i < ROWS; i++)
    for (int j = 0; j < COLS; j++)
      map[i][j] = ' ';

  Pos *start = new Pos(0, 0, nullptr);
  Pos *goal = new Pos(17, 28, nullptr);
  map[start->y][start->x] = 'S';
  map[goal->y][goal->x] = 'G';

  list<Pos *> open;
  list<Pos *> closed;

  open.push_back(start);

  print_map(map);
  while (!open.empty())
  {
    Pos *current = open.front();
    open.pop_front();

    if (current->x == goal->x && current->y == goal->y)
    {
      cout << "Destino encontrado\n";

      current = current->last;
      while (current != start)
      {
        map[current->y][current->x] = '*';
        current = current->last;
      }
      break;
    }

    closed.push_back(current);
    if (current->y > 0)
    {
      Pos *temp = new Pos(current->y - 1, current->x, current);
      check_lists(open, closed, temp);
    }

    if (current->y < ROWS - 1)
    {
      Pos *temp = new Pos(current->y + 1, current->x, current);
      check_lists(open, closed, temp);
    }

    if (current->x > 0)
    {
      Pos *temp = new Pos(current->y, current->x - 1, current);
      check_lists(open, closed, temp);
    }

    if (current->x < COLS - 1)
    {
      Pos *temp = new Pos(current->y, current->x + 1, current);
      check_lists(open, closed, temp);
    }
  }

  print_map(map);
}

void print_map(char map[ROWS][COLS])
{
  cout << '+';
  for (int i = 0; i < COLS; ++i)
  {
    cout << '-';
  }
  cout << '+' << endl;

  for (int i = 0; i < ROWS; i++)
  {
    cout << '|';
    for (int j = 0; j < COLS; j++)
    {
      cout << map[i][j];
    }
    cout << '|' << endl;
  }

  cout << '+';
  for (int i = 0; i < COLS; ++i)
  {
    cout << '-';
  }
  cout << '+' << endl;
}

void check_lists(list<Pos *> &open, list<Pos *> &closed, Pos *temp)
{
  for (auto it = open.begin(); it != open.end(); ++it)
  {
    if (temp->x == (*it)->x && temp->y == (*it)->y)
    {
      delete temp;
      return;
    }
  }

  for (auto it = closed.begin(); it != closed.end(); ++it)
  {
    if (temp->x == (*it)->x && temp->y == (*it)->y)
    {
      delete temp;
      return;
    }
  }

  open.push_back(temp);
}
