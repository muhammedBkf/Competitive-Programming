std::vector<int> closestNumbers(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    int min = std::abs(arr[0] - arr[1]);
    for (int i = 1; i < arr.size()-1; i++) {
        if (std::abs(arr[i] - arr[i + 1]) < min)min = std::abs( arr[i] - arr[i + 1]);
    }
    std::vector<int> cc;
    for (int i = 0; i < arr.size() - 1; i++) {
        if (std::abs(arr[i] - arr[i + 1]) == min) {
            cc.push_back(arr[i]); cc.push_back(arr[i + 1]);
        }

    }
    return cc;

}
