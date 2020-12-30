stack<pair<int,int>> s;
MinStack::MinStack() {
    while(!s.empty())   s.pop();
}
void MinStack::push(int x) {
    if(s.empty())   s.push({x,x});
   else s.push({x,min(x,s.top().second)});
}

void MinStack::pop() {
    if(s.empty())   return;
    s.pop();
}

int MinStack::top() {
    if(s.empty())   return -1;
    return s.top().first;
}

int MinStack::getMin() {
    if(s.empty()) return -1;
    return s.top().second;
}


