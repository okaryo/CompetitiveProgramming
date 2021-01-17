n = gets.to_i
a = gets.split.map(&:to_i)
puts a.find_index([a[0, (2**n)/2].max, a[(2**n)/2, (2**n)/2].max].min) + 1
