N = gets.to_i
t = N**2
i = 1
while i <= N do
  if 2**i > t
    puts 'Yes'
    exit 0
  end
  i += 1
end
puts 'No'
