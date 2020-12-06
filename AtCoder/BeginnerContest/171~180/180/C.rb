n = gets.to_i
a = []
i = 1
while i * i <= n
  if n % i == 0
    puts i
    a << i if i * i != n
  end
  i += 1
end
a.reverse_each { |x| puts n / x }
