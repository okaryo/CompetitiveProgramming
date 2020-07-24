n = gets.to_i - 1

if (n / 20).even?
  puts n % 20 + 1
else
  puts 20 - (n % 20)
end
