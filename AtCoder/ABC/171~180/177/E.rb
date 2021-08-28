_ = gets.to_i
a = gets.split.map(&:to_i)
max_a = a.max
is_prime = Array.new(max_a+1, true)
min_factors = Array.new(max_a+1, 0)
is_prime[0] = false
is_prime[1] = false
min_factors[1] = 1
2.upto(max_a) do |i|
  next unless is_prime[i]
  min_factors[i] = i
  j = i + i
  while j <= max_a
    is_prime[j] = false
    if min_factors[j] == 0
      min_factors[j] = i
    end
    j += i
  end
end
factors = []
a.each do |ai|
  t = ai
  f = []
  f << min_factors[t]
  while t != min_factors[t]
    t /= min_factors[t]
    f << min_factors[t]
  end
  factors.concat(f.uniq)
end
factors.delete(1)
if factors.length == factors.uniq.length
  puts 'pairwise coprime'
  exit 0
end
gcd = 0
a.each do |ai|
  gcd = gcd.gcd(ai)
end
if gcd == 1
  puts 'setwise coprime'
else
  puts 'not coprime'
end
