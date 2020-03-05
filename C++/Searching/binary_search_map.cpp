/*This function searches for an specific key x in a map m in a range l to r in the keys index in the map.*/

map<int, int>::iterator binarySearch(map<int, int> m, int l, int r, int x)
{
    while (r >= l)
    {
        map<int, int>::iterator it = m.begin();
        int mid = l + (r - l) / 2;

        advance(it, mid);
        if (it->first < x)
            l = mid+1;
        else if (it->first > x)
            r = mid - 1;
        else
            return it;
    }
    return ++(m.end());
}
