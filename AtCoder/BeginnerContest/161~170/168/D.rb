n, m = gets.split.map(&:to_i)
ar = Array.new(n){[]}
m.times do
  a, b = gets.split.map(&:to_i)
  a -= 1
  b -= 1
  ar[a] << b
  ar[b] << a
end

ans = Array.new(n, -1)
ans[0] = 0
q = [0]
until q.empty? do
  x = q.shift
  ar[x].each do |i|
    next if ans[i] != -1
    ans[i] = x + 1
    q.push(i)
  end
end

if ans.include?(-1)
  puts 'No'
else
  puts 'Yes'
  puts ans[1..-1]
end
