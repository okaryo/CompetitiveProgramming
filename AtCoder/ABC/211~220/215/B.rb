N = gets.to_i
k = 0
while 2**k <= N do
  k += 1
end
puts(k-1)
