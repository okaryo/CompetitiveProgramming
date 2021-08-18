n,k = gets.split.map(&:to_i)
k.times do
  if n % 200 == 0
    n /= 200
  else
    n = n * 1000 + 200
  end
end
puts(n)
