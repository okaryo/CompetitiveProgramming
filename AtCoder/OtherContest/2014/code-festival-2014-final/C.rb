A = gets.to_i
MAX = 10000
f = lambda do |num|
  t = num
  sum = 0
  i = 0
  while t > 0 do
    sum += (t%10)*num**i
    i += 1
    t /= 10
  end
  return sum
end
10.upto(MAX) do |i|
  if f.call(i) == A
    puts(i)
    exit 0
  end
end
puts(-1)
