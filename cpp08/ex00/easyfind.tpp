template <typename T>
typename T::iterator easyfind(T &container, int i) {
    typename T::iterator ip;
	ip = std::find(container.begin(), container.end(), i);
	if (ip != container.end())
		return ip;
	else
		throw NoMemberFoundException();
}