N,M = gets.split.map(&:to_i)
q = []
A = []
mem = Array.new(N) {[]}
M.times do |i|
  k = gets.to_i
  a = gets.split.map(&:to_i)
  A << a
  mem[A.last.first - 1] << i
end
N.times do |i|
  if mem[i].size == 2
    q << i
  end
end
while !q.empty? do
  now = q.shift
  mem[now].each do |p|
    A[p].shift
    if !A[p].empty?
      mem[A[p].first - 1] << p
      if mem[A[p].first - 1].size == 2
        q << A[p].first - 1
      end
    end
  end
end
A.each do |ai|
  if !ai.empty?
    puts('No')
    exit 0
  end
end
puts('Yes')
