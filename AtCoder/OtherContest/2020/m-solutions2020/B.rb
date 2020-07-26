a,b,c = gets.split.map(&:to_i)
k = gets.to_i

yes = 'Yes'
no = 'No'

k.times do
  if a >= b
    b *= 2
  elsif b >= c
    c *= 2
  end
end

if a < b && b < c
  puts yes
else
  puts no
end
