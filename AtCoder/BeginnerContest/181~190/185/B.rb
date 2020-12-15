n,m,t = gets.split.map(&:to_i)
bt = n
now = 0
m.times do
  a,b = gets.split.map(&:to_i)
  bt -= (a - now)
  if bt <= 0
    puts 'No'
    exit 0
  end
  bt = [n, bt + (b - a)].min
  now = b
end
bt -= (t - now)
if bt <= 0
  puts 'No'
else
  puts 'Yes'
end
