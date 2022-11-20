template <typename T>
void easyfind(T &v, int i) {
    v::iterator ip;
	ip = std::find(v.begin(), v.end(), i);
	if (ip != v.end())
		std::cout << *ip << std::endl;
	else
		throw NoMemberFoundException();
}