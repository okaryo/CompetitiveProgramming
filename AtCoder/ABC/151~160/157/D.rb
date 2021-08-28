N,M,K = gets.split.map(&:to_i)

relation_data = Array.new(N+1, -1)
friend_cnt = Array.new(N+1, 0)
block_cnt_in_relation = Array.new(N+1, 0)

relation_type = ->(x) {
  next relation_data[x] < 0 ? x : relation_data[x] = relation_type[relation_data[x]]
}
relation_size = ->(x) {
  next -relation_data[relation_type[x]]
}
same_relation = ->(*ab) {
  a,b = ab.map(&relation_type)
  next if a == b
  a,b = b,a if relation_data[b] < relation_data[a]
  relation_data[a] += relation_data[b]
  relation_data[b] = a
}

M.times do
  a,b = gets.split.map(&:to_i)
  friend_cnt[a] += 1
  friend_cnt[b] += 1
  same_relation[a, b]
end

K.times do
  a,b = gets.split.map(&:to_i)
  next unless relation_type[a] == relation_type[b]

  block_cnt_in_relation[a] += 1
  block_cnt_in_relation[b] += 1
end

ans = []
1.upto(N).map do |i|
  ans << relation_size[i] - 1 - friend_cnt[i] - block_cnt_in_relation[i]
end

puts ans.join(' ')
